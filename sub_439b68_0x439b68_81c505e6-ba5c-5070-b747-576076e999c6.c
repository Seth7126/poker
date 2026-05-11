// ============================================================
// 函数名称: sub_439b68
// 虚拟地址: 0x439b68
// WARP GUID: 81c505e6-ba5c-5070-b747-576076e999c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InsertMenuA, InsertMenuItemA, GetVersion
// [内部子函数调用]: sub_43bed0, sub_43a014, sub_403e90, sub_403248, sub_43b964, sub_404138, sub_404188, sub_439258, sub_40423c, sub_43b53c, sub_403df8
// [被调用的父级函数]: sub_439de3
// ============================================================

void* __convention("regparm")sub_439b68(void* arg1, HMENU arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    int32_t edi
    int32_t var_50 = edi
    int32_t var_44 = 0
    int32_t var_c = 0
    char ecx
    char var_5 = ecx
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x32) != 0)
        sub_403e90(&var_c, *(arg1 + 0x24))
        int32_t eax_2 = sub_43b964(arg1)
        
        if (eax_2 s> 0)
            int32_t var_29_1 = sub_43a014(arg1)
        else if (*(arg1 + 0x54) != 0)
            void* esi_1 = *(arg1 + 0x58)
            
            if (esi_1 != 0 && *(esi_1 + 0x58) == 0)
                eax_2 = sub_403248(*(esi_1 + 4), 0x438b44)
            
            if (esi_1 == 0 || *(esi_1 + 0x58) != 0 || eax_2.b == 0)
                int32_t var_60_1 = var_c
                void* const var_64_1 = &data_439ddc
                eax_2.w = *(arg1 + 0x54)
                ebp_1 = sub_439258(eax_2.w, &var_44)
                int32_t var_68_1 = ebp_1[-0x10]
                sub_404138(&ebp_1[-2], 3)
                esp_1 = &ExceptionList
        
        uint16_t eax_8 = zx.w(GetVersion())
        
        if (eax_8 u< 4)
            sub_404188(*(arg1 + 0x24), sub_439de3+5)
            int32_t eax_33
            eax_33.b = eax_8 == 4
            int32_t eax_35
            eax_35.b = *(arg1 + 0x3c)
            int32_t edx_10
            edx_10.b = *(arg1 + 0x2c)
            int32_t edx_11
            edx_11.b = *(arg1 + 0x2d)
            enum MENU_ITEM_FLAGS uFlags = *(((eax_33 & 0x7f) << 2) + &data_52e904)
                | *((eax_35 << 2) + &data_52e8f8) | *((edx_10 << 2) + &data_52e8e8)
                | *((edx_11 << 2) + &data_52e8f0) | 0x400
            
            if (sub_43b964(arg1) s<= 0)
                PSTR lpNewItem_1 = sub_40423c(ebp_1[-2])
                int32_t var_6c_2 = 0xffffffff
                InsertMenuA(arg2, 0xffffffff, uFlags, zx.d(*(arg1 + 0x44)), lpNewItem_1)
                esp_1 = &ExceptionList
            else
                PSTR lpNewItem = sub_40423c(*(arg1 + 0x24))
                int32_t var_6c_1 = 0xffffffff
                InsertMenuA(arg2, 0xffffffff, uFlags | MF_POPUP, sub_43a014(arg1), lpNewItem)
                esp_1 = &ExceptionList
        else
            *(ebp_1 - 0x39) = 0x2c
            *(ebp_1 - 0x35) = 0x3f
            void* const eax_10 = sub_43bed0(arg1)
            bool cond:1_1
            
            if (eax_10 == 0)
            label_439c48:
                char temp1_1
                
                if (*(arg1 + 0x40) != 0)
                    void var_8
                    esp_1 = &var_8
                    temp1_1 = (*(**(arg1 + 0x40) + 0x1c))().b
                    cond:1_1 = temp1_1 == 0
                
                if (*(arg1 + 0x40) != 0 && temp1_1 == 0)
                    eax_10.b = 1
                else
                    eax_10 = nullptr
                    cond:1_1 = true
            else
                char temp0_1 = *(eax_10 + 0x34)
                cond:1_1 = temp0_1 == 0
                
                if (temp0_1 != 0)
                    eax_10.b = 1
                else
                    eax_10 = sub_43b53c(arg1)
                    cond:1_1 = eax_10 == 0
                    
                    if (eax_10 == 0)
                        goto label_439c48
                    
                    eax_10.b = 1
            
            *(ebp_1 - 9) = eax_10.b
            sub_404188(*(arg1 + 0x24), sub_439de3+5)
            int32_t eax_14
            eax_14.b = cond:1_1
            int32_t edx_3
            edx_3.b = *(arg1 + 0x31)
            int32_t ecx_1
            ecx_1.b = *(arg1 + 0x3c)
            int32_t edx_6
            edx_6.b = *(ebp_1 - 1)
            int32_t edx_7
            edx_7.b = *(ebp_1 - 9)
            int32_t eax_19 = *(((eax_14 & 0x7f) << 2) + &data_52e938) | *((edx_3 << 2) + &data_52e930)
                | *((ecx_1 << 2) + &data_52e90c) | *((edx_6 << 2) + &data_52e940)
                | *((edx_7 << 2) + &data_52e948)
            *(ebp_1 - 0x31) = eax_19
            int32_t eax_20
            eax_20.b = *(arg1 + 0x2c)
            int32_t edx_8
            edx_8.b = *(arg1 + 0x2d)
            int32_t edx_9
            edx_9.b = *(arg1 + 0x2e)
            *(ebp_1 - 0x2d) = *((eax_20 << 2) + &data_52e918) | *((edx_8 << 2) + &data_52e928)
                | *((edx_9 << 2) + &data_52e920)
            *(ebp_1 - 0x29) = zx.d(*(arg1 + 0x44))
            *(ebp_1 - 0x25) = 0
            *(ebp_1 - 0x21) = 0
            *(ebp_1 - 0x1d) = 0
            *(ebp_1 - 0x15) = sub_40423c(ebp_1[-2])
            
            if (sub_43b964(arg1) s> 0)
                *(ebp_1 - 0x25) = sub_43a014(arg1)
            
            *(esp_1 - 4) = ebp_1 - 0x39
            *(esp_1 - 8) = 0xffffffff
            *(esp_1 - 0xc) = 0xffffffff
            *(esp_1 - 0x10) = arg2
            InsertMenuItemA()
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_439dca
    sub_403df8(&ebp_1[-0x10])
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
