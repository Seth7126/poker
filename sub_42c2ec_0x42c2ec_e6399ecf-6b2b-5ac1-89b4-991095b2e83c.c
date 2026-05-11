// ============================================================
// 函数名称: sub_42c2ec
// 虚拟地址: 0x42c2ec
// WARP GUID: e6399ecf-6b2b-5ac1-89b4-991095b2e83c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MapWindowPoints
// [内部子函数调用]: sub_4032ac, sub_42b2f0, sub_42c4d4, sub_4030d0, sub_42b708, sub_40fac8, sub_42c788, sub_40fa94, sub_42b180, sub_4318d0, sub_42b71c, sub_429100
// [被调用的父级函数]: sub_4335fc, sub_43550c, sub_4342ac
// ============================================================

int32_t __fastcallsub_42c2ec(int32_t arg1, int32_t* arg2, uint32_t arg3 @ eax, char arg4)
{
    // 第一条实际指令: HWND ExceptionList
    HWND ExceptionList
    uint32_t cPoints
    int32_t points
    int32_t var_1c
    
    if (arg2 == 0 || arg2 == 0xffffffff)
        void* eax = *(arg3 + 0x90)
        
        if (eax == 0 || *(eax + 0x17c) == 0 || *(eax + 0x148) == 0)
            int32_t points_1
            sub_40fa94(*(arg3 + 0x30), *(arg3 + 0x34), &points_1)
            points = points_1
            int32_t var_24
            var_1c = var_24
            int32_t* ebx_2 = *(arg3 + 0x24)
            
            if (ebx_2 != 0)
                sub_42b2f0(ebx_2, &points, &points_1)
                points = points_1
                var_1c = var_24
        else
            (*(**(eax + 0x148) + 0x14))()
            cPoints = 2
            int32_t* lpPoints = &points
            ExceptionList = nullptr
            MapWindowPoints(sub_4318d0(*(arg3 + 0x90)), ExceptionList, lpPoints, cPoints)
        
        cPoints = sub_42b708(arg3)
        void var_38
        sub_40fac8(sub_42b71c(arg3), var_1c, points, &var_38, cPoints)
        cPoints = arg3
        __builtin_memcpy(&points, &var_38, 0x10)
        return sub_42c4d4(cPoints, &points)
    
    sub_42c788(arg3)
    char result
    int32_t edx_5
    
    if (*(arg3 + 0x90) != 0)
        int32_t ebx
        ebx.w = 0xffc2
        result, edx_5 = sub_4032ac(*(arg3 + 0x90), arg2, arg3)
    
    if (*(arg3 + 0x90) == 0 || result != 0)
        result = 1
    else
        result = 0
    
    if (result == 0)
        return result
    
    edx_5.b = 1
    int32_t* eax_18 = sub_429100(sub_426ee9+0x5b, edx_5)
    int32_t __saved_ebp
    cPoints = &__saved_ebp
    int32_t (* var_4c_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_19 = *(arg3 + 0x90)
    HWND hWndFrom
    
    if (eax_19 == 0)
        hWndFrom = nullptr
    else
        hWndFrom = sub_4318d0(eax_19)
    
    sub_42b180(arg3, &points)
    
    if (hWndFrom != 0)
        MapWindowPoints(hWndFrom, nullptr, &points, 2)
    
    eax_18[1] = arg2
    int32_t* edx_7
    edx_7.b = arg4
    eax_18[0x15].b = edx_7.b
    eax_18[0x16] = arg1
    __builtin_memcpy(&eax_18[0x11], &points, 0x10)
    MapWindowPoints(nullptr, sub_4318d0(arg2), &points, 1)
    hWndFrom.w = 0xffbb
    sub_4032ac(arg2, eax_18, points, var_1c)
    fsbase->NtTib.ExceptionList = var_1c
    int32_t var_4c_3 = 0x42c4c6
    return sub_4030d0(eax_18)
}
