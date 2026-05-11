// ============================================================
// 函数名称: sub_40c024
// 虚拟地址: 0x40c024
// WARP GUID: 5429d234-7dd8-5869-836e-938d83577310
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_40c150
// [被调用的父级函数]: sub_52b63c, sub_4e63cc, sub_43c480, sub_411b8c, sub_428bd4, sub_49ebd4, sub_52b7f8, sub_51d170, sub_43c26c, sub_4afa30, sub_51d764, sub_51974c, sub_4afaf8, sub_428b90, sub_4e5e3c, sub_52b8e8, sub_4d8208, sub_40c688, sub_4d7108, sub_4746a0, sub_4118f4
// ============================================================

void* __convention("regparm")sub_40c024(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char* eax_1 = sub_40423c(arg1)
    char* eax_1 = sub_40423c(arg1)
    char* eax_3 = sub_40423c(arg2)
    void* eax_5 = sub_40c150(eax_3, eax_1)
    
    if (eax_5 == 0)
        return nullptr
    
    return eax_5 - eax_3 + 1
}
