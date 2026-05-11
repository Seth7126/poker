// ============================================================
// 函数名称: sub_429794
// 虚拟地址: 0x429794
// WARP GUID: b12a856b-c7d5-5110-a55e-d05a3821e75d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_429540, sub_4318d0, sub_429768, sub_4296ec
// [被调用的父级函数]: sub_4298b4
// ============================================================

LRESULT __fastcallsub_429794(char arg1, struct HWND__** arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        HWND eax_1
        int32_t edx
        eax_1, edx = sub_429768(arg3)
        *arg2 = eax_1
        edx.b = 5
        return sub_4296ec(data_531764, edx, *arg2, arg3, 0)
    
    LRESULT result = sub_429540(arg3, arg4)
    
    if (result != 0)
        *arg2 = sub_4318d0(result)
    
    return result
}
