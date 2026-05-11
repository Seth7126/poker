// ============================================================
// 函数名称: sub_4a87b0
// 虚拟地址: 0x4a87b0
// WARP GUID: c054477f-f831-5dcc-84c1-b1179ebe684f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_4a8af0, sub_4a8678, sub_4a73d0, sub_4a80d4
// ============================================================

int32_t* __fastcallsub_4a87b0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
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
    
    sub_4030a0(arg1, 0)
    arg3[6] = arg4
    arg3[7] = arg5
    
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
