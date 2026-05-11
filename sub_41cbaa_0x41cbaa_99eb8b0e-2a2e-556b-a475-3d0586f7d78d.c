// ============================================================
// 函数名称: sub_41cbaa
// 虚拟地址: 0x41cbaa
// WARP GUID: 99eb8b0e-2a2e-556b-a475-3d0586f7d78d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41ca88
// ============================================================

int32_tsub_41cbaa(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = ReleaseDC(nullptr, arg1[-3])
    *arg1
    return result
}
