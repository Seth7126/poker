// ============================================================
// 函数名称: sub_430ed0
// 虚拟地址: 0x430ed0
// WARP GUID: 3931e628-f10e-5977-8df8-a5bb94268486
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42d01c, sub_431bcc, sub_42c754, sub_42e898, sub_418900
// [被调用的父级函数]: sub_444014, sub_4246d8, sub_4b5214
// ============================================================

int32_t __convention("regparm")sub_430ed0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = sub_42d01c(arg1)
    int32_t ecx = sub_42d01c(arg1)
    
    if (sub_431bcc(arg1) != 0)
        sub_418900(arg1[0x16])
        ecx = sub_42c754(arg1, 0)
    
    return sub_42e898(ecx, 0xb008)
}
