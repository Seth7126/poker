// ============================================================
// 函数名称: sub_43d524
// 虚拟地址: 0x43d524
// WARP GUID: 5bcfd538-f265-5854-90e9-e57a504dc301
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetMenuItemCount, GetMenuState
// [内部子函数调用]: sub_43d3e0, sub_43d43c
// [被调用的父级函数]: sub_445420, sub_43d934
// ============================================================

int32_t __fastcallsub_43d524(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t eax
    int32_t var_8 = eax
    *(arg2 + 0xc) = 0
    uint32_t uId_3 = 0xffffffff
    uint32_t uId_2 = 0xffffffff
    int32_t var_18 = 0xffffffff
    int32_t eax_2 = GetMenuItemCount(*(arg2 + 8))
    int32_t* esp_1 = &var_28
    int32_t result = eax_2 - 1
    
    if (result s>= 0)
        int32_t i_1 = result + 1
        uint32_t uId = 0
        int32_t i
        
        do
            int32_t var_2c_1 = 0x400
            int16_t edi_1 = GetMenuState(*(arg2 + 8), uId, MF_BYPOSITION)
            int16_t eax_6
            eax_6.b = *(arg2 + 4)
            result = sub_43d3e0(*(arg2 + 8), edi_1.b, uId, eax_6.b, &var_4)
            esp_1 = &var_28
            
            if (result.b != 0)
                if ((edi_1 & 2) == 0)
                    if (uId_3 s>= 0)
                        *(arg2 + 0xc) = 3
                    else
                        uId_3 = uId
                        *(arg2 + 0xc) = 2
                    
                    if ((edi_1 & 0x80) != 0)
                        uId_2 = uId
                    else if (uId_2 s>= 0)
                        uint32_t uId_1 = uId
                else if (uId_3 s< 0)
                    uId_3 = 0xfffffffe
            
            uId += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (uId_3 s< 0xffffffff)
        *(arg2 + 0xc) = 0x10000
    else if (uId_3 s>= 0 || eax_2 - 1 s< 0)
    label_43d668:
        result = *(arg2 + 0xc)
        
        if (result == 2)
            result = result << 0x10 | ebp_1[-3]
            *(arg2 + 0xc) = result
        else if (result == 3)
            if (ebp_1[-5] s< 0)
                ebp_1[-5] = ebp_1[-3]
            
            result = result << 0x10 | ebp_1[-5]
            *(arg2 + 0xc) = result
    else
        int32_t var_1c_1 = eax_2
        int32_t esi_1 = 0
        
        while (true)
            *(esp_1 - 4) = 0x400
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = *(arg2 + 8)
            int32_t edi_2 = GetMenuState()
            *(esp_1 - 4) = ebp_1
            int32_t eax_12
            eax_12.b = *(arg2 + 4)
            *(esp_1 - 8) = eax_12
            int32_t esi_2
            result, ebp_1, esi_2 = sub_43d43c(*(arg2 + 8), edi_2, esi_1)
            *(esp_1 - 8)
            esp_1 -= 4
            
            if (result.b != 0)
                if ((edi_2.w & 2) != 0)
                    *(arg2 + 0xc) = 0x10000
                    break
                
                if (ebp_1[-3] s>= 0)
                    *(arg2 + 0xc) = 3
                else
                    ebp_1[-3] = esi_2
                    *(arg2 + 0xc) = 2
                
                if ((edi_2.w & 0x80) != 0)
                    ebp_1[-4] = esi_2
                else if (ebp_1[-4] s>= 0)
                    ebp_1[-5] = esi_2
            
            esi_1 = esi_2 + 1
            int32_t temp1_1 = ebp_1[-6]
            ebp_1[-6] -= 1
            
            if (temp1_1 == 1)
                goto label_43d668
    
    *esp_1
    esp_1[1]
    esp_1[2]
    *ebp_1
    return result
}
