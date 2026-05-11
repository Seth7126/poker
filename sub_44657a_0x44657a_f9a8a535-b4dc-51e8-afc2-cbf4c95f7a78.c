// ============================================================
// 函数名称: sub_44657a
// 虚拟地址: 0x44657a
// WARP GUID: f9a8a535-b4dc-51e8-afc2-cbf4c95f7a78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetActiveWindow
// [内部子函数调用]: sub_447664, sub_41051c, sub_4106bc, sub_403df8, sub_440a0c
// [被调用的父级函数]: sub_4463a4
// ============================================================

int32_tsub_44657a(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    
    if (*(data_5317dc + 0x3c) != arg1[-6])
        sub_447664(data_5317dc, 0)
    else
        void* const edx
        edx.w = *(arg1 - 0x12)
        sub_447664(data_5317dc, edx.w)
    
    sub_440a0c(arg1[-3])
    
    if (*(*(data_5317dc + 0x70) + 8) s<= 0)
        *(data_5317dc + 0x6c) = 0
    else
        *(data_5317dc + 0x6c) = sub_41051c()
        sub_4106bc(*(data_5317dc + 0x70))
    
    if (arg1[-7] != 0)
        SetActiveWindow(arg1[-7])
    
    data_52e980 = arg1[-4]
    void* eax_14 = arg1[-1]
    *(eax_14 + 0x2cc) &= 0xf7
    fsbase->NtTib.ExceptionList = arg3
    sub_403df8(&arg1[-8])
    *arg1
    return arg1[-2]
}
