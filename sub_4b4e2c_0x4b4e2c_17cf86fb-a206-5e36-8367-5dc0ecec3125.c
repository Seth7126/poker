// ============================================================
// 函数名称: sub_4b4e2c
// 虚拟地址: 0x4b4e2c
// WARP GUID: 17cf86fb-a206-5e36-8367-5dc0ecec3125
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_425af0, sub_425c24
// [被调用的父级函数]: sub_4b4efc, sub_4b4d28, sub_4b543f, sub_4b526c, sub_4b4e78
// ============================================================

int32_t* __convention("regparm")sub_4b4e2c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: LRESULT eax_1 = sub_425af0(arg1)
    LRESULT eax_1 = sub_425af0(arg1)
    
    if (eax_1 s>= 0 && (*(*arg1[0x7c] + 0x14))() != 0 && sub_425c24(arg1, eax_1) != 0)
        return (*(*arg1[0x7c] + 0xc))()
    
    sub_403df8(arg2)
    return arg2
}
