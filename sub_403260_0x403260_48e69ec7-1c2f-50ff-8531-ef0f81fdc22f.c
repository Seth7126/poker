// ============================================================
// 函数名称: sub_403260
// 虚拟地址: 0x403260
// WARP GUID: 48e69ec7-1c2f-50ff-8531-ef0f81fdc22f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_4abbb0, sub_4398b4, sub_42c1fc, sub_424ecc, sub_41e5a0, sub_42a874, sub_4b008c, sub_42d8a0, sub_4301a4, sub_4af7a3, sub_439880, sub_42a78b, sub_439754, sub_429f30, sub_42a694, sub_4a2124, sub_4a1a28, sub_4397bc, sub_43d790, sub_43ba64, sub_4a256b, sub_4abda8, sub_4af7b0, sub_4ae168, sub_4366f4, sub_424ea8, sub_4ae620, sub_4397ec, sub_439738, sub_42a840, sub_43978c, sub_43981c, sub_42a80c, sub_42d87c, sub_439850
// ============================================================

void __convention("regparm")sub_403260(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t* ecx_1 = arg1
    
    while (true)
        void* ecx_2 = *ecx_1
        
        if (ecx_2 == arg2)
            break
        
        ecx_1 = *(ecx_2 - 0x24)
        
        if (ecx_1 == 0)
            arg1.b = 0xa
            noreturn sub_4027e0(arg1) __tailcall
}
