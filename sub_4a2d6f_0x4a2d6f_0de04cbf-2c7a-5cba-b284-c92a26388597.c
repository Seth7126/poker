// ============================================================
// 函数名称: sub_4a2d6f
// 虚拟地址: 0x4a2d6f
// WARP GUID: 0de04cbf-2c7a-5cba-b284-c92a26388597
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c, sub_4a1ad0
// [被调用的父级函数]: 无
// ============================================================

char*sub_4a2d6f(uint16_t* arg1 @ esi)
{
    // 第一条实际指令: char* eax_8
    char* eax_8
    void* __saved_ebp_2
    int32_t edx
    int16_t edx_3
    eax_8, edx_3, __saved_ebp_2 = (*edx)()
    *eax_8 += eax_8.b
    char temp1 = eax_8[0x72]
    eax_8[0x72] += edx_3.b
    int32_t eflags
    void* esi = __outsd(edx_3, *arg1, arg1, eflags)
    int32_t entry_ebx
    
    if (temp1 + edx_3.b s< 0)
        entry_ebx:1.b = entry_ebx:1.b
        void* __saved_ebp_1 = __saved_ebp_2
        *(esi + 0x5d) |= entry_ebx.b
    else
        uint16_t* gsbase
        int32_t esi_1 = __outsb(edx_3, *(gsbase + esi), esi, eflags)
        
        if (eax_8 != 0x68747541)
            int32_t eflags_1
            int16_t temp0
            temp0, eflags_1 = __arpl_memw_gpr16(*(__saved_ebp_2 + 0x74), &__return_addr)
            *(__saved_ebp_2 + 0x74) = temp0
            *(gsbase + eax_8 - 0x68747541) += (eax_8 - 0x68747541).b
            sub_4a1ad0(eax_8 - 0x68747541)
            sub_403e4c(eax_8 - 0x6874751d, sub_4a2dd7+5)
            sub_403df8(eax_8 - 0x687474f1)
            void* eax_4 = eax_8 - 0x687474ed
            sub_403df8(eax_4)
            int32_t* esi_2 = *(eax_8 - 0x687474e5)
            
            if (esi_2 != 0)
                eax_4 = (*(*esi_2 + 0x40))(esi_1, entry_ebx)
            
            int32_t* esi_3 = *(eax_8 - 0x687474e1)
            
            if (esi_3 == 0)
                return eax_4
            
            return (*(*esi_3 + 0x40))(esi_1, entry_ebx)
        
        eax_8 = (*(**(eax_8 - 0x68747515) + 8))(esi_1)
    return eax_8
}
