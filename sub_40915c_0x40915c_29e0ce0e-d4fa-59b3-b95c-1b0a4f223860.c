// ============================================================
// 函数名称: sub_40915c
// 虚拟地址: 0x40915c
// WARP GUID: 29e0ce0e-d4fa-59b3-b95c-1b0a4f223860
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MoveFileA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_4d7b54
// ============================================================

int32_t __convention("regparm")sub_40915c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: PSTR lpNewFileName = sub_40423c(arg2)
    PSTR lpNewFileName = sub_40423c(arg2)
    BOOL eax_3 = MoveFileA(sub_40423c(arg1), lpNewFileName)
    int32_t eax_4 = neg.d(eax_3)
    return neg.d(sbb.d(eax_4, eax_4, eax_3 != 0))
}
