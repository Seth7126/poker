// ============================================================
// 函数名称: sub_49e610
// 虚拟地址: 0x49e610
// WARP GUID: 9c309f45-3a6b-5eac-b844-925895e7882e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_408968, sub_404078
// [被调用的父级函数]: sub_4a79a0
// ============================================================

void* __convention("regparm")sub_49e610(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1 = sub_404078(arg1)
    int32_t eax_1 = sub_404078(arg1)
    
    if (eax_1 == 0 || eax_1 s> arg3)
        return nullptr
    
    int32_t ebx
    ebx.b = *arg1
    char* esi_1 = arg2
    
    if (add_overflow(eax_1, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t edi_3 = arg3 - (eax_1 - 1)
    
    if (add_overflow(arg3, neg.d(eax_1 - 1)))
        sub_403010()
        noreturn
    
    void* result
    
    if (eax_1 != 1)
        if (edi_3 s<= 0)
            return nullptr
        
        while (true)
            if (ebx.b != *esi_1)
                esi_1 = &esi_1[1]
            else
                esi_1 = &esi_1[1]
                
                if (sub_408968(esi_1, &arg1[1], eax_1 - 1) != 0)
                    break
            
            int32_t temp6_1 = edi_3
            edi_3 -= 1
            
            if (add_overflow(temp6_1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (edi_3 s<= 0)
                return nullptr
        
        result = esi_1 - arg2
        
        if (add_overflow(esi_1, neg.d(arg2)))
            sub_403010()
            noreturn
    else
        if (edi_3 s<= 0)
            return nullptr
        
        while (ebx.b != *esi_1)
            esi_1 = &esi_1[1]
            int32_t temp3_1 = edi_3
            edi_3 -= 1
            
            if (add_overflow(temp3_1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (edi_3 s<= 0)
                return nullptr
        
        void* eax_5 = esi_1 - arg2
        
        if (add_overflow(esi_1, neg.d(arg2)))
            sub_403010()
            noreturn
        
        result = eax_5 + 1
        
        if (add_overflow(eax_5, 1))
            sub_403010()
            noreturn
    
    return result
}
