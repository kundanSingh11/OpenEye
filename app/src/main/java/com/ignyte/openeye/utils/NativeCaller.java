package com.ignyte.openeye.utils;

public final class NativeCaller {

    static {
        System.loadLibrary("native-lib");
    }

    public static final native int getVersion();

    public static final native void process();
}
