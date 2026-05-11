// ============================================================
// 函数名称: sub_424ecc
// 虚拟地址: 0x424ecc
// WARP GUID: 9c2d6cf9-1639-540c-a7cd-05f39800313d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436904, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_424ecc(void* arg1)
{
    // 第一条实际指令: if (sub_436904(arg1) != 0)
    if (sub_436904(arg1) != 0)
        char eax_3 = (*(**(arg1 + 0x28) + 0xb4))()
        int32_t* result = *(arg1 + 0x10)
        sub_403260(result, &data_436278)
        
        if (eax_3 == result[0x16].b)
            result.b = 1
            return result
    
    return 0
}
