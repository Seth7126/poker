// ============================================================
// 函数名称: sub_52d80c
// 虚拟地址: 0x52d80c
// WARP GUID: f1f01a21-fc3c-5ec8-844e-7eed60a90097
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, ChangeDisplaySettingsA, ShowCursor
// [内部子函数调用]: sub_40bd44, sub_52d970
// [被调用的父级函数]: sub_472ccc, sub_47326c
// ============================================================

int32_t __fastcallsub_52d80c(HWND arg1, int32_t* arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_10 = *arg2
    int32_t var_10 = *arg2
    int32_t var_c
    int32_t* edi = &var_c
    void* esi_1 = &arg2[1]
    *edi = *esi_1
    edi[1] = *(esi_1 + 4)
    int32_t result = 0
    
    if (sub_52d970(arg3, &var_10) == 0)
        sub_40bd44()
    else
        *(arg3 + 0xc8) = arg1
        
        if (*(arg3 + 4) == 0)
            GetWindowRect(arg1, arg3 + 0xb8)
        
        *(arg3 + 0x88) = var_10
        *(arg3 + 0x8c) = var_c
        int32_t var_8
        *(arg3 + 0x84) = var_8
        *(arg3 + 0x44) = 0x1c0000
        
        if (ChangeDisplaySettingsA(arg3 + 0x1c, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL)
            *(arg3 + 4) = 0
        else
            result.b = 1
            
            if (arg4 != 0)
                ShowCursor(0)
        
        if (*(arg3 + 4) == 0)
            *(arg3 + 4) = result.b
    
    return result
}
