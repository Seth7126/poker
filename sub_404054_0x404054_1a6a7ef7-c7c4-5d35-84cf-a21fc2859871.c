// ============================================================
// 函数名称: sub_404054
// 虚拟地址: 0x404054
// WARP GUID: 1a6a7ef7-c7c4-5d35-84cf-a21fc2859871
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980
// [被调用的父级函数]: sub_4748fc, sub_4692db, sub_50f478, sub_468ec0, sub_47af7c, sub_4cd720, sub_4d4f84, sub_4ce8e2, sub_52452c, sub_5119f8, sub_4986c7, sub_4163fc, sub_469d58, sub_4c4ceb, sub_4c0cbc, sub_4c0984, sub_47b650, sub_5148a0, sub_4fb834, sub_50a64c, sub_51431c, sub_51e1c0, sub_4d5577, sub_519804, sub_4692e4, sub_51300c, sub_4ce5b4, sub_4c8aa0, sub_51fdc8, sub_468eb7, sub_468af3, sub_5293a8, sub_4ce88a, sub_40e8c2, sub_468afc, sub_4e649b, sub_47ab08, sub_4ed7a0, sub_4e6659, sub_4ceed4, sub_5197fb, sub_514ef8, sub_50b624, sub_4c96bc, sub_5223e8, sub_4981b4, sub_4c329c, sub_4c4c9c, sub_50b1ac, sub_418b14, sub_47b037, sub_5285a8, sub_50f7b8, sub_4dc3b8, sub_4a6308, sub_4ce832, sub_525ab8, sub_4137d4, sub_50732c, sub_46f698, sub_514784, sub_40e200, sub_51497c, sub_47b0c8, sub_514468, sub_483128
// ============================================================

void __convention("regparm")sub_404054(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        int32_t ebx_1 = *(arg2 - 4)
        
        if (ebx_1 != 0)
            if (arg3 s>= ebx_1)
                arg3 = ebx_1
            
            *arg1 = arg3.b
            sub_402980(arg2, &arg1[1], arg3)
            return 
    
    *arg1 = 0
}
