// ============================================================
// 函数名称: sub_4addf9
// 虚拟地址: 0x4addf9
// WARP GUID: d1d1b1b5-8c1c-5587-9a21-be6de886238d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e1c
// [被调用的父级函数]: sub_4adcfc
// ============================================================

int32_tsub_4addf9(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-4], 3)
    *arg1
    return result
}
