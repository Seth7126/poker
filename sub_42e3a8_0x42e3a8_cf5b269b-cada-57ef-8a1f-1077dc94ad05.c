// ============================================================
// 函数名称: sub_42e3a8
// 虚拟地址: 0x42e3a8
// WARP GUID: cf5b269b-cada-57ef-8a1f-1077dc94ad05
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e3c8
// [被调用的父级函数]: sub_42e30c, sub_442aa0, sub_431468, sub_4323e0, sub_4303b8, sub_42e4a4, sub_42dc00
// ============================================================

void __convention("regparm")sub_42e3a8(int32_t* arg1)
{
    // 第一条实际指令: arg1[0x48].w -= 1
    arg1[0x48].w -= 1
    
    if (arg1[0x48].w == 0 && (arg1[0x11].b & 0x10) != 0)
        sub_42e3c8()
}
