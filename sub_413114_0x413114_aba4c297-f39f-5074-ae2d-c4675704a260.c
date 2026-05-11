// ============================================================
// 函数名称: sub_413114
// 虚拟地址: 0x413114
// WARP GUID: aba4c297-f39f-5074-ae2d-c4675704a260
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_403e4c
// [被调用的父级函数]: sub_414868
// ============================================================

int32_t* __fastcallsub_413114(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char* arg4, char* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg3 = sub_4033d0(arg1, arg2)
    
    arg3[1] = arg1
    arg3[2] = arg7
    arg3[3] = arg6
    sub_403e4c(&arg3[4], arg5)
    sub_403e4c(&arg3[5], arg4)
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg3
}
