// ============================================================
// 函数名称: sub_4188ec
// 虚拟地址: 0x4188ec
// WARP GUID: 6d2fabfc-44f5-5edb-a133-9bb29b0b3e97
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_4263dc, sub_4187b0, sub_432b9c, sub_43e104, sub_423918, sub_43a0a4, sub_43ab7c, sub_43a2fc
// ============================================================

void __convention("regparm")sub_4188ec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == arg1[6])
    if (arg2 == arg1[6])
        return 
    
    arg1[6] = arg2
    int32_t ebx
    ebx.w = 0xfffd
    sub_4032ac(arg1)
}
