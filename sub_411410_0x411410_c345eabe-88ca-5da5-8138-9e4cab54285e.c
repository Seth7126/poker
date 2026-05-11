// ============================================================
// 函数名称: sub_411410
// 虚拟地址: 0x411410
// WARP GUID: c345eabe-88ca-5da5-8138-9e4cab54285e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_410ea4
// [被调用的父级函数]: sub_4adc14
// ============================================================

int32_t* __fastcallsub_411410(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
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
    
    arg3[6] = arg1
    sub_410ea4(arg3, 0, arg4)
    
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
