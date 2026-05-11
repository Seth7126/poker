// ============================================================
// 函数名称: sub_4aac3c
// 虚拟地址: 0x4aac3c
// WARP GUID: a1c8e18a-846d-5ff9-ae17-7ce76d69b06c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_494050, sub_403898
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4aac3c(int32_t* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_403898(__return_addr)
    sub_403898(__return_addr)
    
    if (*(arg1 - 9) == 0 || arg1[2] s<= 0)
        arg1[-1] = 0
    else
        arg1[-1] = 1
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_494050(data_5325ec)
    *arg1
    return arg1[-1]
}
