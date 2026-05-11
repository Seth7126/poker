// ============================================================
// 函数名称: sub_46659c
// 虚拟地址: 0x46659c
// WARP GUID: 93781cdb-fa9f-5ef9-b70d-936d451b43e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46663c
// ============================================================

int32_t* __fastcallsub_46659c(int32_t arg1, int32_t arg2, int16_t* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t i = sx.d(*arg3) - arg2
    int32_t i = sx.d(*arg3) - arg2
    
    if (i s< 0)
        i = neg.d(i)
    
    int32_t ecx_1 = 0
    
    while (i != 0)
        i s>>= 1
        ecx_1 += 1
    
    *(arg1 + (ecx_1 << 2)) += 1
    int32_t j = 0
    int32_t i_1 = 1
    void* var_14 = &data_52eed4
    
    do
        int32_t ebx_2 = sx.d(arg3[*var_14])
        
        if (ebx_2 != 0)
            for (; j s> 0xf; j -= 0x10)
                arg4[0xf0] += 1
            
            if (ebx_2 s< 0)
                ebx_2 = neg.d(ebx_2)
            
            int32_t ecx_4 = 1
            
            while (true)
                ebx_2 s>>= 1
                
                if (ebx_2 == 0)
                    break
                
                ecx_4 += 1
            
            int32_t ecx_5 = ecx_4 + (j << 4)
            arg4[ecx_5] += 1
            j = 0
        else
            j += 1
        
        i_1 += 1
        var_14 += 4
    while (i_1 s< 0x40)
    
    if (j s> 0)
        *arg4 += 1
    
    return arg4
}
