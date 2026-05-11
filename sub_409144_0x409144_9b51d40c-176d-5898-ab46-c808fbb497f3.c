// ============================================================
// 函数名称: sub_409144
// 虚拟地址: 0x409144
// WARP GUID: 9b51d40c-176d-5898-ab46-c808fbb497f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteFileA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_46d884, sub_52452c, sub_4d7b54
// ============================================================

int32_t __convention("regparm")sub_409144(int32_t arg1)
{
    // 第一条实际指令: BOOL eax_2 = DeleteFileA(sub_40423c(arg1))
    BOOL eax_2 = DeleteFileA(sub_40423c(arg1))
    int32_t eax_3 = neg.d(eax_2)
    return neg.d(sbb.d(eax_3, eax_3, eax_2 != 0))
}
