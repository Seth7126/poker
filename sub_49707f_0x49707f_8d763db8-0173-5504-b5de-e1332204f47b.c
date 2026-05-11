// ============================================================
// 函数名称: sub_49707f
// 虚拟地址: 0x49707f
// WARP GUID: 8d763db8-0173-5504-b5de-e1332204f47b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403898
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_49707f(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: (*(**(arg1 - 4) + 0x14))()
    (*(**(arg1 - 4) + 0x14))()
    *(*(arg1 - 4) + 0x40) = 0
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t ebx
    ebx.w = 0xfffd
    return sub_4032ac(*(*(arg1 - 4) + 0x34), *(arg1 - 4), arg2)
}
