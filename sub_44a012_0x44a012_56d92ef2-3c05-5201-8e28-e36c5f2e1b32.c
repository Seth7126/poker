// ============================================================
// 函数名称: sub_44a012
// 虚拟地址: 0x44a012
// WARP GUID: 56d92ef2-3c05-5201-8e28-e36c5f2e1b32
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449ef8
// ============================================================

int32_tsub_44a012(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    HGDIOBJ ho = arg1[-6]
    
    if (ho != 0)
        DeleteObject(ho)
    
    HGDIOBJ ho_1 = arg1[-7]
    
    if (ho_1 != 0)
        DeleteObject(ho_1)
    
    *arg1
    return arg1[-1]
}
