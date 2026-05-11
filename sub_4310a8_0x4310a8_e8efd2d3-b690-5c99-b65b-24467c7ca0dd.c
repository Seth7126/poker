// ============================================================
// 函数名称: sub_4310a8
// 虚拟地址: 0x4310a8
// WARP GUID: e8efd2d3-b690-5c99-b65b-24467c7ca0dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440ee0, sub_4289ac
// [被调用的父级函数]: sub_4312b4, sub_43113c
// ============================================================

LRESULT __convention("regparm")sub_4310a8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    char var_14 = 1
    
    if ((arg1[8].b & 0x10) != 0)
    label_431123:
        
        if (sub_4289ac(0xb016, zx.d(*(arg2 + 4)), *(arg2 + 8)) == 0)
            var_14 = 0
    else
        for (int32_t* i = arg1; i != 0; i = i[9])
            ebx.w = 0xffdb
            int32_t* eax_2 = sub_4032ac(i)
            
            if (eax_2 != 0 && eax_2[0xb] != 0)
                ebx.w = 0xfff0
                
                if (sub_4032ac(eax_2, arg2).b != 0)
                    goto label_431131
        
        int32_t* eax_5 = sub_440ee0(arg1)
        
        if (eax_5 == 0)
            goto label_431123
        
        ebx.w = 0xffaf
        
        if (sub_4032ac(eax_5, arg2).b == 0)
            goto label_431123
    
    label_431131:
    LRESULT result
    result.b = var_14
    return result
}
