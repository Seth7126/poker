// ============================================================
// 函数名称: sub_460570
// 虚拟地址: 0x460570
// WARP GUID: cdb50810-34a8-59e6-9e45-aeaa610ec7c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c, sub_46032c
// [被调用的父级函数]: sub_4605c0
// ============================================================

int32_t __fastcallsub_460570(int32_t arg1, void** arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (*arg2 == 0)
    if (*arg2 == 0)
        *arg2 = sub_46032c(arg3)
    
    sub_45340c(*arg2, arg1, 0x11)
    int32_t result = sub_45340c(*arg2 + 0x11, arg4, 0x100)
    *(*arg2 + 0x111) = 0
    return result
}
