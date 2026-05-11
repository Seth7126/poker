// ============================================================
// 函数名称: sub_41b08a
// 虚拟地址: 0x41b08a
// WARP GUID: 2817b2af-1802-5497-afc5-76aca110c39b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41aebc
// ============================================================

BOOLsub_41b08a(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    DeleteObject(arg1[-0xd])
    BOOL result = DeleteObject(arg1[-0xe])
    *arg1
    return result
}
