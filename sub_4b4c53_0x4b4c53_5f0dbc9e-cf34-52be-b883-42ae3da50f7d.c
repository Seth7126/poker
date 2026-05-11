// ============================================================
// 函数名称: sub_4b4c53
// 虚拟地址: 0x4b4c53
// WARP GUID: 5f0dbc9e-cf34-52be-b883-42ae3da50f7d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e1c, sub_404754
// [被调用的父级函数]: sub_4b498a
// ============================================================

void*sub_4b4c53(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: (*(*arg1[-1] + 0xc0))()
    (*(*arg1[-1] + 0xc0))()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-0x5f])
    sub_403e1c(&arg1[-0x5c], 2)
    sub_404754(&arg1[-0x5a], sub_407ca8+0x14)
    sub_403df8(&arg1[-3])
    *arg1
    return &arg1[-3]
}
