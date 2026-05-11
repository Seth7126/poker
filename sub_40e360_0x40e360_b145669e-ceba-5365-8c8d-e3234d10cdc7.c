// ============================================================
// 函数名称: sub_40e360
// 虚拟地址: 0x40e360
// WARP GUID: b145669e-ceba-5365-8c8d-e3234d10cdc7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_414aa0
// ============================================================

int80_t __fastcallsub_40e360(int32_t arg1, int32_t* arg2, int32_t arg3 @ eax, int80_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp_1 = &var_c
    void* ecx_1 = **arg2
    int32_t ebx_1
    ebx_1.b = *(ecx_1 + 1)
    ebx_1.b = *(ecx_1 + ebx_1 + 2)
    int32_t ebx_2 = ebx_1 << 2
    
    if (*(arg2 + 0xb) u> 0xfe)
        arg2[2]
        (*(ebx_2 + 0x40e3b9))()
    else
        esp_1 = &var_c - *(ebx_2 + sub_40e3a5)
        int32_t eax
        int32_t ecx_3
        void* edx
        eax, edx, ecx_3 = (*(ebx_2 + 0x40e3b9))()
        *(edx + 0x10)
        
        if (*(edx + 0xb) u< 0xfe)
            ecx_3()
        else
            (*(sx.d(ecx_3.w) + *eax))()
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return arg4
}
