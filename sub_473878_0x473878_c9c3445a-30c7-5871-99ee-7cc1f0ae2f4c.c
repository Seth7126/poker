// ============================================================
// 函数名称: sub_473878
// 虚拟地址: 0x473878
// WARP GUID: c9c3445a-30c7-5871-99ee-7cc1f0ae2f4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_472ccc, sub_4807f4, sub_42afdc, sub_473938, sub_444050, sub_42affc, sub_4318d0, sub_473684, sub_47289c
// [被调用的父级函数]: sub_471144
// ============================================================

void* __fastcallsub_473878(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    int32_t esi_1 = arg2
    *(arg3 + 0xce2) = 0
    *(arg3 + 0xce3) = 0
    
    if (arg4 == 0 && sub_4318d0(arg3) s< 0)
        sub_403008()
        noreturn
    
    sub_42afdc(arg3, esi_1)
    sub_42affc(arg3, arg1)
    sub_444050(arg3, 0)
    void* result
    
    if (arg3[0x36c].b == 0)
        int32_t var_14 = arg3[0xf]
        esp = &var_14
        HWND eax_9 = sub_4318d0(arg3)
        
        if (eax_9 s< 0)
            sub_403008()
            noreturn
        
        arg3[0xe]
        result, esi_1 = sub_473938(arg3, eax_9)
        
        if (*(arg3 + 0xce2) == 0)
            result = sub_473684(arg3)
    else
        int32_t ecx
        ecx.b = 1
        result = sub_472ccc(arg3, 0xffffffff)
    
    if (*(arg3 + 0xce2) == 0)
        sub_4807f4(arg3, arg3[0x392], esi_1, arg1)
        result = sub_47289c(arg3, arg3[0xe], arg3[0xf])
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return result
}
