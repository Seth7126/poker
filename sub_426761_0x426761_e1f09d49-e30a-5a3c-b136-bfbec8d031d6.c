// ============================================================
// 函数名称: sub_426761
// 虚拟地址: 0x426761
// WARP GUID: e1f09d49-e30a-5a3c-b136-bfbec8d031d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalFree
// [内部子函数调用]: sub_403844, sub_403898, sub_426610
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_426761(void* arg1 @ ebp, int32_t* arg2, void* const arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: GlobalFree(*(arg1 - 8))
    GlobalFree(*(arg1 - 8))
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    return sub_426610(*(arg1 - 4))
}
