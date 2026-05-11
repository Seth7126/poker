// ============================================================
// 函数名称: sub_4ad5c0
// 虚拟地址: 0x4ad5c0
// WARP GUID: 43cebe75-8bff-5811-b1d2-cefc602cdcdd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_403df8, sub_4acf9c
// [被调用的父级函数]: 无
// ============================================================

int32_t*sub_4ad5c0(void* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: char* ecx_1 = sub_403898(__return_addr)
    char* ecx_1 = sub_403898(__return_addr)
    int32_t* ebp = sub_4acf9c(*(arg1 - 4), *(arg1 - 8), ecx_1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&ebp[-2])
    *ebp
    return &ebp[-2]
}
