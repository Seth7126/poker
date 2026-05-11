// ============================================================
// 函数名称: sub_43bcb4
// 虚拟地址: 0x43bcb4
// WARP GUID: 3c7cd35e-da60-5198-975a-12b675fe5fdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43bba0, sub_4391ac, sub_43bc80
// [被调用的父级函数]: sub_439ab4, sub_43be7c, sub_43b9e4
// ============================================================

int32_t __convention("regparm")sub_43bcb4(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_43bc80(arg1)
    int32_t eax_1 = sub_43bc80(arg1)
    
    if (eax_1 != 0xffffffff)
        return sub_43bba0(arg1, eax_1)
    
    sub_4391ac(data_5308ac)
    noreturn
}
