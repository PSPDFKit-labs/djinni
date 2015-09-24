// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Interface containing constants */
public abstract class ConstantsInterface {
    public static final boolean BOOL_CONSTANT = true;

    public static final byte I8_CONSTANT = 1;

    public static final short I16_CONSTANT = 2;

    /** i32_constant has documentation. */
    public static final int I32_CONSTANT = 3;

    /**
     * i64_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    public static final long I64_CONSTANT = 4;

    public static final float F32_CONSTANT = 5.0f;

    public static final double F64_CONSTANT = 5.0;

    public abstract void dummy();

    public static final class CppProxy extends ConstantsInterface
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void dummy()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_dummy(this.nativeRef);
        }
        private native void native_dummy(long _nativeRef);
    }
}
