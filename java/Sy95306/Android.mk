ifeq ($(APP_BUILD_CALCULATOR), true)
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_STATIC_JAVA_LIBRARIES :=  android-support-v4 guava rxjava \
        android-support-v7-recyclerview \
	okhttp3 retrofit2 converter-gson adapter-rxjava2 gson \


LOCAL_STATIC_JAVA_AAR_LIBARIES := rxAndroid_aar \
	constraint_layout_aar \
	design_aar butterknife_aar 
	

LOCAL_SRC_FILES := $(call all-java-files-under, src)

LOCAL_SDK_VERSION := current

LOCAL_PACKAGE_NAME := Sy95306

res_dir := res ../../../prebuilts/sdk/current/support/v7/appcompat/res
LOCAL_RESOURCE_DIR := $(addprefix $(LOCAL_PATH)/, $(res_dir))

LOCAL_AAPT_FLAGS := --auto-add-overlay \
    --extra-packages butterknife
    --extra-packages android.support.constraint
    --extra-packages android.support.design
    --extra-packages io.reactivex.android

LOCAL_PROGUARD_FLAG_FILES := proguard.flags

include $(BUILD_PACKAGE)

include $(CLEAR_VARS)
LOCAL_PREBUILT_STATIC_JAVA_LIBRARIES := \
    rxjava:libs/rxjava-2.2.2.jar \
    okhttp3:libs/okhttp-3.10.0.jar \
    retrofit2:libs/retrofit-2.4.0.jar \
    converter-gson:libs/converter-gson-2.4.0.jar \
    adapter-rxjava2:libs/adapter-rxjava2-2.4.0.jar \
    gson:libs/gson-2.8.5.jar \
	rxAndroid_aar:libs/rxandroid-2.1.0.aar \
	constraint_layout_aar:libs/constraint-layout-1.1.3.aar \
	design_aar:libs/design-27.1.1.aar \
	butterknife_aar:libs/butterknife-8.8.1.aar

include $(BUILD_MULTI_PREBUILT)

# Use the following include to make our test apk.
include $(call all-makefiles-under,$(LOCAL_PATH))

endif
#TODO 这里有个地方写错了，讲道理  上面声明(存在)了 2个“LOCAL_PREBUILT_STATIC_JAVA_LIBRARIES”的数据，
#可能会损失一部分的数据，待会测试检验 看看编译情况