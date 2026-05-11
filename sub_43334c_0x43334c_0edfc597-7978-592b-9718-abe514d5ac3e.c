// ============================================================
// 函数名称: sub_43334c
// 虚拟地址: 0x43334c
// WARP GUID: 0edfc597-7978-592b-9718-abe514d5ac3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_4342ac, sub_433b34, sub_4337f8, sub_433d44
// ============================================================

void __convention("regparm")sub_43334c(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* esp
    void* esp
    
    if (arg2.b != 0)
        void var_10
        esp = &var_10
        arg1 = sub_4033d0(arg3, arg2)
    
    arg1[7] = arg3
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
}
