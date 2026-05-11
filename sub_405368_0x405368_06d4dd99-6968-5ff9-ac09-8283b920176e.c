// ============================================================
// 函数名称: sub_405368
// 虚拟地址: 0x405368
// WARP GUID: 06d4dd99-6968-5ff9-ac09-8283b920176e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405368, sub_402d00, sub_402980, sub_405360, j_sub_404780, sub_405348, sub_402784, sub_402754, sub_4027e0
// [被调用的父级函数]: sub_405368, sub_4054f4
// ============================================================

int32_t* __fastcallsub_405368(int32_t arg1, void* arg2, int32_t* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: void* ebx_1 = *arg3
    void* ebx_1 = *arg3
    int32_t i_2 = *arg4
    int32_t* result
    
    if (i_2 s> 0)
        int32_t i_4 = 0
        
        if (ebx_1 != 0)
            i_4 = *(ebx_1 - 4)
            ebx_1 -= 8
        
        int32_t eax_2
        eax_2.b = *(arg2 + 1)
        void* esi_1 = arg2 + eax_2
        int32_t eax_3 = *(esi_1 + 2)
        char** eax_4 = *(esi_1 + 6)
        char* esi_2
        
        if (eax_4 == 0)
            esi_2 = nullptr
        else
            esi_2 = *eax_4
        
        int32_t eax_6 = i_2 * eax_3
        
        if (divs.dp.d(sx.q(eax_6), i_2) != eax_3)
            int32_t eax_9
            eax_9.b = 4
            sub_4027e0(eax_9)
            noreturn
        
        int32_t var_20_2 = eax_6 + 8
        void* ebx_3
        
        if (ebx_1 == 0 || *ebx_1 == 1)
            void* var_24 = ebx_1
            
            if (i_2 s< i_4 && esi_2 != 0)
                j_sub_404780(ebx_1 + 8 + i_2 * eax_3, esi_2, i_4 - i_2)
            
            sub_402784(&var_24, var_20_2)
            ebx_3 = var_24
        else
            *ebx_1 -= 1
            ebx_3 = sub_402754(var_20_2)
            int32_t i_3 = i_4
            
            if (i_2 s< i_3)
                i_3 = i_2
            
            if (esi_2 == 0)
                sub_402980(*arg3, ebx_3 + 8, i_3 * eax_3)
            else
                sub_402d00(ebx_3 + 8, i_3 * eax_3, 0)
                *arg3
                sub_405348(i_3)
        
        *ebx_3 = 1
        *(ebx_3 + 4) = i_2
        sub_402d00(eax_3 * i_4 + ebx_3 + 8, (i_2 - i_4) * eax_3, 0)
        
        if (arg1 s> 1)
            int32_t var_c_1 = arg1 - 1
            
            if (i_2 - 1 s>= 0)
                int32_t i_1 = i_2
                int32_t var_10_1 = 0
                int32_t i
                
                do
                    sub_405368(&arg4[1])
                    var_10_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        result = arg3
        *result = ebx_3 + 8
    else
        if (i_2 s< 0)
            int32_t* eax
            eax.b = 4
            sub_4027e0(eax)
            noreturn
        
        result = arg3
        sub_405360()
    
    return result
}
