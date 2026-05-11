// ============================================================
// 函数名称: sub_4b63bc
// 虚拟地址: 0x4b63bc
// WARP GUID: 6691b96d-1314-5678-b47f-45ca2488f765
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b62cc, sub_4b63ac
// [被调用的父级函数]: sub_4b64a4
// ============================================================

uint32_t __stdcallsub_4b63bc(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_2
    int32_t __saved_edi_1 = __saved_edi_2
    int32_t __saved_edi
    int32_t* esp_1 = &__saved_edi
    char* ebx = arg2
    uint32_t i_3 = zx.d(ebx[1])
    uint32_t i_4 = i_3
    
    if (i_3 != 0)
        void* ebx_1 = &ebx[3]
        void* esi = arg5
        uint32_t i
        
        do
            uint32_t eax_1 = zx.d(*ebx_1)
            
            if ((eax_1.b & 0x80) != 0)
                eax_1.b &= 0x7f
                eax_1 |= 0x4000
            label_4b6417:
                *(esp_1 - 4) = 0
                *(esp_1 - 8) = *esi
                *(esp_1 - 0xc) = 0
                *(esp_1 - 0x10) = eax_1
                esp_1 -= 0x10
                esi += 4
            else if (eax_1.b == 0xc)
                *(esp_1 - 4) = *(esi + 0xc)
                *(esp_1 - 8) = *(esi + 8)
                *(esp_1 - 0xc) = *(esi + 4)
                *(esp_1 - 0x10) = *esi
                esp_1 -= 0x10
                esi += 0x10
            else
                if (eax_1.b u< 5 || eax_1.b u> 7)
                    goto label_4b6417
                
                *(esp_1 - 4) = *(esi + 4)
                *(esp_1 - 8) = *esi
                *(esp_1 - 0xc) = 0
                *(esp_1 - 0x10) = eax_1
                esp_1 -= 0x10
                esi += 8
            
            ebx_1 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
        ebx = arg2
    
    int32_t* var_14 = esp_1
    uint32_t i_2 = zx.d(ebx[2])
    uint32_t i_5 = i_2
    
    if (i_2 != 0)
        uint32_t i_1
        
        do
            *(esp_1 - 4) = *(arg4 + (i_2 << 2) - 4)
            esp_1 -= 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    uint32_t ecx = zx.d(*ebx)
    
    if (ecx == 4)
        *(esp_1 - 4) = 0xfffffffd
        esp_1 -= 4
        int32_t var_8 = i_5 + 1
        
        if (ebx[3] == 9 || ebx[3] == 0xd)
            ecx = 8
    
    int32_t* var_10 = esp_1
    *(esp_1 - 4) = 0
    void var_34
    *(esp_1 - 8) = &var_34
    *(esp_1 - 0xc) = ecx
    *(esp_1 - 0x10) = 0
    sub_4b63ac()
    int32_t edx = *(esp_1 - 0x10)
    int32_t ecx_1 = *(esp_1 - 0xc)
    *(esp_1 - 0xc) = arg6
    *(esp_1 - 0x10) = &var_14
    *(esp_1 - 0x14) = ecx_1
    *(esp_1 - 0x18) = edx
    *(esp_1 - 0x1c) = 0x52e2fc
    *(esp_1 - 0x20) = arg3
    *(esp_1 - 0x24) = arg1
    uint32_t result
    int32_t ecx_2
    result, ecx_2 = (*(*arg1 + 0x18))()
    
    if (result == 0)
        return result
    
    ecx_2.b = 1
    *(esp_1 - 0x28) = ecx_2
    noreturn sub_4b62cc(result, &var_34) __tailcall
}
