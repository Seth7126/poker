// ============================================================
// 函数名称: sub_44c3b6
// 虚拟地址: 0x44c3b6
// WARP GUID: e76f6589-53fa-5c3a-9a8f-ee0a569a7ace
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4303b8
// [被调用的父级函数]: 无
// ============================================================

void*sub_44c3b6(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    *(*(arg1 - 4) + 0x1f8) = 0
    void* result
    int32_t* ebp
    result, ebp = sub_4303b8(*(arg1 - 4), *(arg1 - 8))
    *ebp
    return result
}
