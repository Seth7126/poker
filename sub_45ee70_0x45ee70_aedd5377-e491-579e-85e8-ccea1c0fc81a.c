// ============================================================
// 函数名称: sub_45ee70
// 虚拟地址: 0x45ee70
// WARP GUID: aedd5377-e491-579e-85e8-ccea1c0fc81a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4601e8
// ============================================================

int32_t __convention("regparm")sub_45ee70(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebp = arg1[5]
    int32_t* ebp = arg1[5]
    int32_t edi = ebp[1]
    char* esi = *ebp
    
    if (edi == 0)
        if (ebp[3]() == 0)
            return 0
        
        esi = *ebp
        edi = ebp[1]
    
    int32_t edi_1 = edi - 1
    int32_t eax_3
    eax_3.b = *esi
    void* esi_1 = &esi[1]
    int32_t eax_4 = eax_3 << 8
    
    if (edi_1 == 0)
        if (ebp[3](eax_4) == 0)
            return 0
        
        esi_1 = *ebp
        edi_1 = ebp[1]
    
    int32_t edi_2 = edi_1 - 1
    int32_t eax_7
    eax_7.b = *esi_1
    void* esi_2 = esi_1 + 1
    int32_t var_2c_3 = eax_4 + eax_7 - 2
    int32_t i
    char* var_24
    
    if (var_2c_3 s< 0xe)
        void* eax_30 = *arg1
        *(eax_30 + 0x14) = 0x4c
        *(eax_30 + 0x18) = var_2c_3
        (*(*arg1 + 4))(var_2c_3)
    else
        i = 0
        char var_20
        var_24 = &var_20
        
        do
            if (edi_2 == 0)
                if (ebp[3](var_2c_3, i, var_24) == 0)
                    return 0
                
                esi_2 = *ebp
                edi_2 = ebp[1]
            
            edi_2 -= 1
            *var_24 = *esi_2
            esi_2 += 1
            i += 1
            var_24 = &var_24[1]
        while (i s< 0xe)
        
        var_2c_3 -= 0xe
        char var_1f
        char var_1e
        char var_1d
        char var_1c
        
        if (var_20 != 0x4a || var_1f != 0x46 || var_1e != 0x49 || var_1d != 0x46 || var_1c != 0)
            void* eax_28 = *arg1
            *(eax_28 + 0x14) = 0x4c
            *(eax_28 + 0x18) = var_2c_3 + 0xe
            (*(*arg1 + 4))(var_2c_3, i, var_24)
        else
            char var_1b
            char var_1a
            
            if (var_1b != 1)
                void* eax_11 = *arg1
                *(eax_11 + 0x14) = 0x73
                int32_t edx_2
                edx_2.b = var_1b
                *(eax_11 + 0x18) = edx_2
                int32_t ecx_1
                ecx_1.b = var_1a
                *(eax_11 + 0x1c) = ecx_1
                (*(*arg1 + 4))(var_2c_3, i, var_24)
            else if (var_1a u> 2)
                void* eax_13 = *arg1
                *(eax_13 + 0x14) = 0x58
                int32_t edx_4
                edx_4.b = var_1b
                *(eax_13 + 0x18) = edx_4
                int32_t ecx_3
                ecx_3.b = var_1a
                *(eax_13 + 0x1c) = ecx_3
                (*(*arg1 + 4))(var_2c_3, i, var_24)
            arg1[0x45] = 1
            char var_19
            char* eax_10
            eax_10.b = var_19
            arg1[0x46].b = eax_10.b
            char var_18
            int32_t edx_6
            edx_6.b = var_18
            char var_17
            int16_t ecx_5
            ecx_5.b = var_17
            *(arg1 + 0x119) = (edx_6 << 8).w + ecx_5
            char var_16
            int32_t eax_15
            eax_15.b = var_16
            char var_15
            int16_t edx_8
            edx_8.b = var_15
            *(arg1 + 0x11b) = (eax_15 << 8).w + edx_8
            int32_t* eax_18 = *arg1 + 0x18
            *eax_18 = zx.d(*(arg1 + 0x119))
            eax_18[1] = zx.d(*(arg1 + 0x11b))
            int32_t edx_10
            edx_10.b = arg1[0x46].b
            eax_18[2] = edx_10
            *(*arg1 + 0x14) = 0x56
            (*(*arg1 + 4))(var_2c_3, i, var_24)
            char var_14
            char var_13
            
            if ((var_14 | var_13) != 0)
                void* eax_22 = *arg1
                *(eax_22 + 0x14) = 0x59
                int32_t edx_12
                edx_12.b = var_14
                *(eax_22 + 0x18) = edx_12
                int32_t ecx_8
                ecx_8.b = var_13
                *(eax_22 + 0x1c) = ecx_8
                (*(*arg1 + 4))()
            
            int32_t edx_14
            edx_14.b = var_13
            int32_t eax_24
            eax_24.b = var_14
            
            if (eax_24 * edx_14 * 3 != var_2c_3)
                void* eax_26 = *arg1
                *(eax_26 + 0x14) = 0x57
                *(eax_26 + 0x18) = var_2c_3
                (*(*arg1 + 4))()
    
    *ebp = esi_2
    ebp[1] = edi_2
    
    if (var_2c_3 s> 0)
        (*(arg1[5] + 0x10))(var_2c_3, i, var_24)
    
    return 1
}
