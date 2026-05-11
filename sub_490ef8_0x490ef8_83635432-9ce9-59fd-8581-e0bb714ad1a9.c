// ============================================================
// 函数名称: sub_490ef8
// 虚拟地址: 0x490ef8
// WARP GUID: 83635432-9ce9-59fd-8581-e0bb714ad1a9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48f6a4, sub_4033d0, sub_48f97c, sub_40422c, sub_490d38, sub_490894, sub_4040c4, sub_490b6c, sub_4030d0, sub_44cde0, sub_4038c8, sub_48f9d0, sub_403df8, sub_405b58, sub_490b08
// [被调用的父级函数]: sub_519df0
// ============================================================

void* __convention("regparm")sub_490ef8(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    int32_t edi
    int32_t var_50 = edi
    int32_t* esp_1 = &var_50
    int32_t var_44 = 0
    int32_t var_34 = 0
    int32_t ecx
    
    if (arg2.b != 0)
        void var_60
        esp_1 = &var_60
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_9 = arg2.b
    int32_t var_8 = arg1
    sub_40422c(arg4)
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_40353c
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x18
    void var_30
    void* ebp_1 = sub_48f6a4(arg4, &var_30)
    sub_48f9d0(ebp_1 - 0x2c)
    *(esp_1 - 0x10)
    void* esp_10 = esp_1 - 0xc
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x18)
    char eax_4
    void* ebp_2
    eax_4, ebp_2 = sub_48f6a4(*(ebp_1 + 0x10), ebp_1 - 0x2c)
    
    if (eax_4 != 0)
        *(esp_10 - 4) = 1
        *(esp_10 - 8) = arg3
        *(esp_10 - 0xc) = *(ebp_2 - 0x24)
        *(ebp_2 - 4)
        sub_490894(ebp_2 - 0x3c, ebp_2 - 0x1b)
        *(esp_10 - 0x10) = ebp_2 - 0x3c
        void* edx_3
        edx_3.b = 1
        void** eax_9 = sub_490d38(ecx, edx_3, 0x48ff88)
        *(esp_10 - 4) = ebp_2
        *(esp_10 - 8) = j_sub_4037f0
        *(esp_10 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_10 - 0xc
        *(esp_10 - 0x10) = 0
        sub_490b08(*(ebp_2 - 0x24), 0, eax_9)
        eax_9[0xb]
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = sx.q(sub_48f97c(ebp_2 - 0x2c, eax_9[0xd]))
        *(esp_10 - 0x10) = edx_6
        *(esp_10 - 0x14) = eax_13
        int32_t temp0_1 = *(esp_10 - 0x10)
        void* esp_24
        
        if (0 != temp0_1)
            *(esp_10 - 0x14)
            *(esp_10 - 0x10)
            esp_24 = esp_10 - 0xc
            
            if (0 s<= temp0_1)
            label_491042:
                sub_490b6c(eax_9)
                *(esp_24 - 4) = 1
                *(esp_24 - 8) = arg3
                *(esp_24 - 0xc) = *(ebp_2 - 0x24)
                *(ebp_2 - 4)
                sub_490894(ebp_2 - 0x3c, ebp_2 - 0x1b)
                *(esp_24 - 0x10) = ebp_2 - 0x3c
                sub_490d38(ecx, 0, *(ebp_2 - 4))
                sub_405b58(*(ebp_2 - 4) + 0x10, eax_9[4])
                sub_4030d0(eax_9)
                *(esp_24 + 8)
                fsbase->NtTib.ExceptionList = *esp_24
                *(esp_24 + 8) = 0x49109e
                return sub_48f9d0(ebp_2 - 0x2c)
        else
            *(esp_10 - 0x14)
            *(esp_10 - 0x10)
            esp_24 = esp_10 - 0xc
            
            if (eax_9[0xd] u<= *(esp_10 - 0x14))
                goto label_491042
        
        sub_4040c4(ebp_2 - 0x40, sub_49110f+5, *(ebp_2 + 0x10))
        *(ebp_2 - 0x40)
        sub_44cde0()
        sub_490b6c(eax_9)
        sub_4038c8()
        esp_10 = esp_24 + 0xc
    
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_4910cb
    sub_403df8(ebp_2 - 0x40)
    sub_403df8(ebp_2 - 0x30)
    sub_403df8(ebp_2 + 0x10)
    return ebp_2 + 0x10
}
