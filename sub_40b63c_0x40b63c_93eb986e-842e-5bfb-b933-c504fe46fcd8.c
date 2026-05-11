// ============================================================
// 函数名称: sub_40b63c
// 虚拟地址: 0x40b63c
// WARP GUID: 93eb986e-842e-5bfb-b933-c504fe46fcd8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_403e4c
// [被调用的父级函数]: sub_4b5a84
// ============================================================

int32_t* __fastcallsub_40b63c(char* arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
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
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    sub_403e4c(&arg3[1], arg1)
    arg3[2] = arg4
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg3
}
