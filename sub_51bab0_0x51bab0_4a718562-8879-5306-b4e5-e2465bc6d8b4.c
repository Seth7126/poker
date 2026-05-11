// ============================================================
// 函数名称: sub_51bab0
// 虚拟地址: 0x51bab0
// WARP GUID: 4a718562-8879-5306-b4e5-e2465bc6d8b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517ad4, sub_403010
// [被调用的父级函数]: sub_5047f4
// ============================================================

int32_t __convention("regparm")sub_51bab0(void* arg1)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t edx
    
    if (*(arg1 + 0x3d01) != 0)
        int32_t i_4 = sx.d(*(arg1 + 0x490a))
        
        if (i_4 s> 0)
            edx = 1
            int32_t i
            
            do
                if (sx.d(*(arg1 + (edx << 2) + 0x4670)) == *(arg1 + 0x3d04))
                    void* eax_1 = *data_52ffd0
                    *(eax_1 + 0x3d08)
                    int32_t eax_2 = *(eax_1 + 0x3d08) * 0x35
                    bool o_1 = unimplemented  {imul eax, dword [eax+0x3d08], 0x35}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + (eax_2 << 2) + 0x60f58) = *(arg1 + 0x3d14)
                    *(data_5301b0 + (eax_2 << 2) + 0x60f5c) = *(arg1 + 0x3d04)
                    sub_517ad4(arg1 + 0x4672, edx)
                    esi = 1
                    break
                
                edx += 1
                i = i_4
                i_4 -= 1
            while (i != 1)
    
    int32_t i_5 = sx.d(*(arg1 + 0x490a))
    
    if (i_5 s> 0)
        edx = 1
        int32_t i_1
        
        do
            int32_t ecx_5 = *(data_5301b0 + 0x69954)
            int32_t edi_1 = sx.d(*(arg1 + 0x490a))
            int32_t ecx_6 = ecx_5 - edi_1
            
            if (add_overflow(ecx_5, neg.d(edi_1)))
                sub_403010()
                noreturn
            
            int32_t ecx_7 = ecx_6 + edx
            
            if (add_overflow(ecx_6, edx))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_7, neg.d(esi)))
                sub_403010()
                noreturn
            
            bool o_5 = unimplemented  {imul ecx, ecx, 0x35}
            
            if (o_5)
                sub_403010()
                noreturn
            
            *(data_5301b0 + (ecx_7 - esi) * 0xd4 + 0x60f58) = *(arg1 + 0x3d14)
            int32_t ecx_12 = *(data_5301b0 + 0x69954)
            int32_t edi_4 = sx.d(*(arg1 + 0x490a))
            int32_t ecx_13 = ecx_12 - edi_4
            
            if (add_overflow(ecx_12, neg.d(edi_4)))
                sub_403010()
                noreturn
            
            int32_t ecx_14 = ecx_13 + edx
            
            if (add_overflow(ecx_13, edx))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_14, neg.d(esi)))
                sub_403010()
                noreturn
            
            bool o_9 = unimplemented  {imul ecx, ecx, 0x35}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(data_5301b0 + (ecx_14 - esi) * 0xd4 + 0x60f5c) = sx.d(*(arg1 + (edx << 2) + 0x4670))
            edx += 1
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x3d14)
    bool o_10 = unimplemented  {imul eax, dword [ebx+0x3d14], 0x41}
    
    if (o_10)
        sub_403010()
        noreturn
    
    int32_t i_6 = sx.d(*(arg1 + *(arg1 + 0x3d14) * 0x104))
    
    if (i_6 s> 0)
        edx = 1
        int32_t i_2
        
        do
            *(arg1 + 0x3d14)
            bool o_11 = unimplemented  {imul ecx, dword [ebx+0x3d14], 0x41}
            
            if (o_11)
                sub_403010()
                noreturn
            
            int32_t esi_3 = sx.d(*(arg1 + *(arg1 + 0x3d14) * 0x104 + (edx << 2) - 0x102))
            
            if (esi_3 != *(arg1 + 0x3d08) || *(arg1 + 0x3d01) == 0)
                *(arg1 + 0x3d14)
                bool o_12 = unimplemented  {imul ecx, dword [ebx+0x3d14], 0x41}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                bool o_13 = unimplemented  {imul ecx, esi, 0x35}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                *(data_5301b0 + esi_3 * 0xd4 + 0x60f5c) = sx.d(*(arg1 + (edx << 2) + 0x4356))
            
            edx += 1
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    *(arg1 + 0x3d14)
    int32_t eax_5 = *(arg1 + 0x3d14) * 0x41
    bool o_14 = unimplemented  {imul eax, dword [ebx+0x3d14], 0x41}
    
    if (o_14)
        sub_403010()
        noreturn
    
    edx.w = *(arg1 + 0x490a)
    int16_t temp6 = *(arg1 + (eax_5 << 2))
    *(arg1 + (eax_5 << 2)) += edx.w
    
    if (add_overflow(temp6, edx.w))
        sub_403010()
        noreturn
    
    if (*(arg1 + 0x3d01) != 0)
        *(arg1 + 0x3d14)
        bool o_16 = unimplemented  {imul edx, dword [ebx+0x3d14], 0x41}
        
        if (o_16)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x3d14) * 0x104 + (*(*data_52ffd0 + 0x3d04) << 2) - 0x102) =
            (*(*data_52ffd0 + 0x3d08)).w
    
    int32_t result = *(data_5301b0 + 0x69954)
    
    if (result s> 0)
        void* edx_4 = data_5301b0 + 0x61058
        int32_t i_3
        
        do
            *edx_4 = 0
            edx_4 += 0xd4
            i_3 = result
            result -= 1
        while (i_3 != 1)
    
    *(arg1 + 0x3d00) = 0
    return result
}
