// ============================================================
// 函数名称: sub_466238
// 虚拟地址: 0x466238
// WARP GUID: 28f57853-8a9e-5847-9453-1fd6ca60cf7d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466160
// [被调用的父级函数]: sub_466418
// ============================================================

int32_t __fastcallsub_466238(int32_t arg1, int16_t* arg2, int32_t* arg3 @ eax, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t i_2 = sx.d(*arg2) - arg1
    int32_t i_2 = sx.d(*arg2) - arg1
    int32_t i = i_2
    int32_t i_3 = i_2
    
    if (i s< 0)
        i = neg.d(i)
        i_3 -= 1
    
    int32_t var_18 = 0
    
    for (; i != 0; i s>>= 1)
        var_18 += 1
    
    if (sub_466160(arg3, *(arg5 + (var_18 << 2)), sx.d(*(arg5 + var_18 + 0x400))) == 0)
        return 0
    
    if (var_18 != 0 && sub_466160(arg3, i_3, var_18) == 0)
        return 0
    
    int32_t i_1 = 1
    void* var_20_1 = &data_52eed4
    int32_t j = 0
    
    do
        int32_t esi = sx.d(arg2[*var_20_1])
        
        if (esi != 0)
            for (; j s> 0xf; j -= 0x10)
                if (sub_466160(arg3, arg4[0xf0], sx.d(arg4[0x13c].b)) == 0)
                    return 0
            
            int32_t var_14 = esi
            
            if (esi s< 0)
                esi = neg.d(esi)
                var_14 -= 1
            
            int32_t var_18_1 = 1
            
            while (true)
                esi s>>= 1
                
                if (esi == 0)
                    break
                
                var_18_1 += 1
            
            int32_t eax_11 = (j << 4) + var_18_1
            
            if (sub_466160(arg3, arg4[eax_11], sx.d(*(arg4 + eax_11 + 0x400))) == 0)
                return 0
            
            if (sub_466160(arg3, var_14, var_18_1) == 0)
                return 0
            
            j = 0
        else
            j += 1
        
        i_1 += 1
        var_20_1 += 4
    while (i_1 s< 0x40)
    
    if (j s> 0 && sub_466160(arg3, *arg4, sx.d(arg4[0x100].b)) == 0)
        return 0
    
    return 1
}
