// ============================================================
// 函数名称: sub_434fab
// 虚拟地址: 0x434fab
// WARP GUID: 2e4c1579-a70d-540b-80b4-f842adf713cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_434e00
// [被调用的父级函数]: sub_434ebc
// ============================================================

void*sub_434fab(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: arg1[-2]
    arg1[-2]
    void* ecx_1 = (*(*arg1[-1] + 8))()
    int32_t* var_4 = arg1
    sub_434e00(*(arg1[-2] + 0x64), 0, ecx_1)
    (*(*arg1[-1] + 8))()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-5])
    *arg1
    return &arg1[-5]
}
