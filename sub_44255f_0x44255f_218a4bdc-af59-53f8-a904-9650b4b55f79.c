// ============================================================
// 函数名称: sub_44255f
// 虚拟地址: 0x44255f
// WARP GUID: 218a4bdc-af59-53f8-a904-9650b4b55f79
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_403df8
// [被调用的父级函数]: sub_442414
// ============================================================

int32_tsub_44255f(int32_t* arg1 @ ebp, int32_t arg2)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-0x45])
    int32_t arg_c
    int32_t* esp = &arg_c
    
    if (*(arg1 - 5) != 0)
        sub_403428(arg1[-1])
        fsbase->NtTib.ExceptionList = arg_c
        void arg_1c
        esp = &arg_1c
    
    *esp
    *arg1
    return arg1[-1]
}
