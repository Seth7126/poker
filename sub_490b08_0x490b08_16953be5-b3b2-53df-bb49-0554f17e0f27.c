// ============================================================
// 函数名称: sub_490b08
// 虚拟地址: 0x490b08
// WARP GUID: 16953be5-b3b2-53df-bb49-0554f17e0f27
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_490ef8
// ============================================================

int32_t __fastcallsub_490b08(int32_t arg1, int32_t arg2, void** arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t eax
    eax.b = arg4
    int32_t* eax_6 = arg3[4]
    int32_t result
    void* ebx_1
    result, ebx_1 = sub_490768(arg3, "Lock", 
        (*(*eax_6 + 0x2c))(eax_6, arg2, arg1, &arg3[0xb], &arg3[0xd], &arg3[0xc], &arg3[0xe], 
            *((eax << 2) + &data_52f58c)))
    *(ebx_1 + 0x3c) = 1
    return result
}
