// ============================================================
// 函数名称: sub_4a3e44
// 虚拟地址: 0x4a3e44
// WARP GUID: 070c75be-e1a5-5bb7-ab6d-f5c4fcc7f699
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_4a3d84
// ============================================================

int32_t*sub_4a3e44(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-3])
    int32_t* result
    result.b = *(arg1 - 1)
    *arg1
    return result
}
