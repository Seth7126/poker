// ============================================================
// 函数名称: sub_42a550
// 虚拟地址: 0x42a550
// WARP GUID: ddbc29d2-5131-5b36-953f-7af173e0ed93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_42a97c
// ============================================================

int32_t* __convention("regparm")sub_42a550(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_4030a0(arg3, 0)
    arg1[1] = arg3
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
