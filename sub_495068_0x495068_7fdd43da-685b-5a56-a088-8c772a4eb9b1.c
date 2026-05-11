// ============================================================
// 函数名称: sub_495068
// 虚拟地址: 0x495068
// WARP GUID: 7fdd43da-685b-5a56-a088-8c772a4eb9b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_493fc0, sub_494f1c, sub_4030a0, sub_403428
// [被调用的父级函数]: sub_49657c, sub_496499, sub_4974fc, sub_49649c
// ============================================================

int32_t* __convention("regparm")sub_495068(int32_t* arg1, int32_t arg2, int32_t arg3)
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
    sub_494f1c()
    int32_t edx
    edx.b = 1
    arg1[0x10] = sub_493fc0(sub_493cfc+0x1d4, edx)
    arg1[0xa].b = 0x33
    arg1[1] = arg3
    arg1[6].w = 2
    arg1[7] = 0
    *(arg1 + 0x1a) = 0
    arg1[2].b = arg1[1] != 0xffffffff
    
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
